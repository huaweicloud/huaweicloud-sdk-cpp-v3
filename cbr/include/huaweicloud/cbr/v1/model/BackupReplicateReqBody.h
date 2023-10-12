
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReqBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReqBody_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupReplicateReqBody
    : public ModelBase
{
public:
    BackupReplicateReqBody();
    virtual ~BackupReplicateReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupReplicateReqBody members

    /// <summary>
    /// 复制的描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 复制的目标项目ID
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 复制的目标区域
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 复制的目标区域的存储库ID
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 跨区域复制时，是否启用加速从而缩短复制的时间，如果不指定，默认不启用加速。
    /// </summary>

    bool isEnableAcceleration() const;
    bool enableAccelerationIsSet() const;
    void unsetenableAcceleration();
    void setEnableAcceleration(bool value);

    /// <summary>
    /// 复制名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    bool enableAcceleration_;
    bool enableAccelerationIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReqBody_H_
