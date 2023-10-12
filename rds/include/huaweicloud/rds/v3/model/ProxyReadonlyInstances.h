
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyReadonlyInstances_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyReadonlyInstances_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxyReadonlyInstances
    : public ModelBase
{
public:
    ProxyReadonlyInstances();
    virtual ~ProxyReadonlyInstances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyReadonlyInstances members

    /// <summary>
    /// 只读实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 只读实例权重，取值范围为0~1000。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxyReadonlyInstances_H_
