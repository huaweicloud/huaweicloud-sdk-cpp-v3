
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDedicatedResourceInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDedicatedResourceInfoResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/DedicatedStorageInfo.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/DedicatedComputeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowDedicatedResourceInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDedicatedResourceInfoResponse();
    virtual ~ShowDedicatedResourceInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDedicatedResourceInfoResponse members

    /// <summary>
    /// 专属资源池ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 专属资源池名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 引擎名称。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::vector<std::string>& getAvailabilityZoneIds();
    bool availabilityZoneIdsIsSet() const;
    void unsetavailabilityZoneIds();
    void setAvailabilityZoneIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源规格类型。
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);

    /// <summary>
    /// 专属资源池状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DedicatedComputeInfo getDedicatedComputeInfo() const;
    bool dedicatedComputeInfoIsSet() const;
    void unsetdedicatedComputeInfo();
    void setDedicatedComputeInfo(const DedicatedComputeInfo& value);

    /// <summary>
    /// 
    /// </summary>

    DedicatedStorageInfo getDedicatedStorageInfo() const;
    bool dedicatedStorageInfoIsSet() const;
    void unsetdedicatedStorageInfo();
    void setDedicatedStorageInfo(const DedicatedStorageInfo& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::vector<std::string> availabilityZoneIds_;
    bool availabilityZoneIdsIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    std::string status_;
    bool statusIsSet_;
    DedicatedComputeInfo dedicatedComputeInfo_;
    bool dedicatedComputeInfoIsSet_;
    DedicatedStorageInfo dedicatedStorageInfo_;
    bool dedicatedStorageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDedicatedResourceInfoResponse_H_
