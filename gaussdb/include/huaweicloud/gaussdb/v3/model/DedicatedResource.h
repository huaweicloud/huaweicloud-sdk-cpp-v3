
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResource_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResource_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/DedicatedResourceCapacity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 专属资源池信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DedicatedResource
    : public ModelBase
{
public:
    DedicatedResource();
    virtual ~DedicatedResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DedicatedResource members

    /// <summary>
    /// 专属资源池ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 专属资源池名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 数据库引擎名称
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// CPU架构
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);

    /// <summary>
    /// 专属资源池状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DedicatedResourceCapacity getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(const DedicatedResourceCapacity& value);

    /// <summary>
    /// 专属资源池可用区信息。
    /// </summary>

    std::vector<std::string>& getAvailabilityZone();
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    std::string status_;
    bool statusIsSet_;
    DedicatedResourceCapacity capacity_;
    bool capacityIsSet_;
    std::vector<std::string> availabilityZone_;
    bool availabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResource_H_
