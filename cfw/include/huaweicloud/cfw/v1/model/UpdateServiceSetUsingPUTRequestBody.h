
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetUsingPUTRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetUsingPUTRequestBody_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Update Service Set Required Body
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateServiceSetUsingPUTRequestBody
    : public ModelBase
{
public:
    UpdateServiceSetUsingPUTRequestBody();
    virtual ~UpdateServiceSetUsingPUTRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServiceSetUsingPUTRequestBody members

    /// <summary>
    /// 服务组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 服务组描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetUsingPUTRequestBody_H_
