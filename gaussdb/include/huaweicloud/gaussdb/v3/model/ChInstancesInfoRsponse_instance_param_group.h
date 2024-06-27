
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_param_group_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_param_group_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数组。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstancesInfoRsponse_instance_param_group
    : public ModelBase
{
public:
    ChInstancesInfoRsponse_instance_param_group();
    virtual ~ChInstancesInfoRsponse_instance_param_group();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstancesInfoRsponse_instance_param_group members

    /// <summary>
    /// 参数ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 参数名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_param_group_H_
