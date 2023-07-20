
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Project_quotas_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Project_quotas_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/Resource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  Project_quotas
    : public ModelBase
{
public:
    Project_quotas();
    virtual ~Project_quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Project_quotas members

    /// <summary>
    /// 资源列表对象。
    /// </summary>

    std::vector<Resource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resource>& value);


protected:
    std::vector<Resource> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Project_quotas_H_
