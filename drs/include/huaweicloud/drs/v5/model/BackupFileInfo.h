
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份文件信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupFileInfo
    : public ModelBase
{
public:
    BackupFileInfo();
    virtual ~BackupFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupFileInfo members

    /// <summary>
    /// 备份文件名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// OBS桶中文件路径。  OBS场景：必选  RDS场景：缺省
    /// </summary>

    std::string getObsPath() const;
    bool obsPathIsSet() const;
    void unsetobsPath();
    void setObsPath(const std::string& value);

    /// <summary>
    /// bak文件数据库版本。  OBS场景：缺省  RDS场景：必选
    /// </summary>

    std::string getRdsVersion() const;
    bool rdsVersionIsSet() const;
    void unsetrdsVersion();
    void setRdsVersion(const std::string& value);

    /// <summary>
    /// bak文件所属实例。  OBS场景：缺省  RDS场景：必选
    /// </summary>

    std::string getRdsSourceInstanceId() const;
    bool rdsSourceInstanceIdIsSet() const;
    void unsetrdsSourceInstanceId();
    void setRdsSourceInstanceId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string obsPath_;
    bool obsPathIsSet_;
    std::string rdsVersion_;
    bool rdsVersionIsSet_;
    std::string rdsSourceInstanceId_;
    bool rdsSourceInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileInfo_H_
