
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加镜像成员请求参数
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceAddImageMemberRequestBody
    : public ModelBase
{
public:
    GlanceAddImageMemberRequestBody();
    virtual ~GlanceAddImageMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceAddImageMemberRequestBody members

    /// <summary>
    /// 镜像成员。取值为目标用户的项目ID。
    /// </summary>

    std::string getMember() const;
    bool memberIsSet() const;
    void unsetmember();
    void setMember(const std::string& value);


protected:
    std::string member_;
    bool memberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequestBody_H_
