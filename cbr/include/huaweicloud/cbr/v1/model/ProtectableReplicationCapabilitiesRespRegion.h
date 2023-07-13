
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableReplicationCapabilitiesRespRegion_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableReplicationCapabilitiesRespRegion_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ProtectableReplicationCapabilitiesRespRegion
    : public ModelBase
{
public:
    ProtectableReplicationCapabilitiesRespRegion();
    virtual ~ProtectableReplicationCapabilitiesRespRegion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProtectableReplicationCapabilitiesRespRegion members

    /// <summary>
    /// 云服务所在的区域
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 支持复制的目标区域列表
    /// </summary>

    std::vector<std::string>& getReplicationDestinations();
    bool replicationDestinationsIsSet() const;
    void unsetreplicationDestinations();
    void setReplicationDestinations(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> replicationDestinations_;
    bool replicationDestinationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableReplicationCapabilitiesRespRegion_H_
