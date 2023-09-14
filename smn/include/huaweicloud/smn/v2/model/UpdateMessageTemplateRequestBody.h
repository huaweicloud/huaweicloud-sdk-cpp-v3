
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequestBody_H_

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
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateMessageTemplateRequestBody
    : public ModelBase
{
public:
    UpdateMessageTemplateRequestBody();
    virtual ~UpdateMessageTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateMessageTemplateRequestBody members

    /// <summary>
    /// 模板内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateMessageTemplateRequestBody_H_
