
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequestBody_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateTopicRequestBody
    : public ModelBase
{
public:
    UpdateTopicRequestBody();
    virtual ~UpdateTopicRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTopicRequestBody members

    /// <summary>
    /// Topic的显示名，推送邮件消息时，作为邮件发件人显示。显示名的长度为192byte或64个中文。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicRequestBody_H_
