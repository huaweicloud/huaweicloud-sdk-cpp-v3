
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateReqBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateReqBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除结构化配置参数
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteStructTemplateReqBody
    : public ModelBase
{
public:
    DeleteStructTemplateReqBody();
    virtual ~DeleteStructTemplateReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteStructTemplateReqBody members

    /// <summary>
    /// 结构化规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateReqBody_H_
