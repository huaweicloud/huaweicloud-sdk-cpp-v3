
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddAppIdRequestBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddAppIdRequestBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加企业应用入参
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AddAppIdRequestBody
    : public ModelBase
{
public:
    AddAppIdRequestBody();
    virtual ~AddAppIdRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAppIdRequestBody members

    /// <summary>
    /// 企业应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 企业应用描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddAppIdRequestBody_H_
