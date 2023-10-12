
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Quotas_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Quotas_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Resources.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  Quotas
    : public ModelBase
{
public:
    Quotas();
    virtual ~Quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Quotas members

    /// <summary>
    /// 资源列表对象。
    /// </summary>

    std::vector<Resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resources>& value);


protected:
    std::vector<Resources> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Quotas_H_
