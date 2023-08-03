
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DssPoolInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DssPoolInfo_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 实例专属存储信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DssPoolInfo
    : public ModelBase
{
public:
    DssPoolInfo();
    virtual ~DssPoolInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DssPoolInfo members

    /// <summary>
    /// 专属存储池所在az
    /// </summary>

    std::string getAzName() const;
    bool azNameIsSet() const;
    void unsetazName();
    void setAzName(const std::string& value);

    /// <summary>
    /// 专属存储池免费空间大小，单位GB
    /// </summary>

    std::string getFreeCapacityGb() const;
    bool freeCapacityGbIsSet() const;
    void unsetfreeCapacityGb();
    void setFreeCapacityGb(const std::string& value);

    /// <summary>
    /// 专属存储池磁盘类型名称，可能取值如下：  - ULTRAHIGH，表示SSD。  - LOCALSSD：表示本地SSD。  - CLOUDSSD：表示SSD云盘，仅支持通用型和独享型规格实例。  - ESSD：表示极速型SSD，仅支持独享型规格实例。
    /// </summary>

    std::string getDsspoolVolumeType() const;
    bool dsspoolVolumeTypeIsSet() const;
    void unsetdsspoolVolumeType();
    void setDsspoolVolumeType(const std::string& value);

    /// <summary>
    /// 专属存储池ID
    /// </summary>

    std::string getDsspoolId() const;
    bool dsspoolIdIsSet() const;
    void unsetdsspoolId();
    void setDsspoolId(const std::string& value);

    /// <summary>
    /// 专属存储池当前状态，可能取值如下： - available，表示可用。 - deploying，表示正在部署。 - enlarging，表示正在扩容。 - frozen，表示冻结。 - sellout，表示售罄。
    /// </summary>

    std::string getDsspoolStatus() const;
    bool dsspoolStatusIsSet() const;
    void unsetdsspoolStatus();
    void setDsspoolStatus(const std::string& value);


protected:
    std::string azName_;
    bool azNameIsSet_;
    std::string freeCapacityGb_;
    bool freeCapacityGbIsSet_;
    std::string dsspoolVolumeType_;
    bool dsspoolVolumeTypeIsSet_;
    std::string dsspoolId_;
    bool dsspoolIdIsSet_;
    std::string dsspoolStatus_;
    bool dsspoolStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DssPoolInfo_H_
