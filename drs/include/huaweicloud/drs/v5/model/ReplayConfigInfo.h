
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayConfigInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayConfigInfo_H_


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
/// 仿真参数信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayConfigInfo
    : public ModelBase
{
public:
    ReplayConfigInfo();
    virtual ~ReplayConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayConfigInfo members

    /// <summary>
    /// 源实例ID。
    /// </summary>

    std::string getDbInstanceId() const;
    bool dbInstanceIdIsSet() const;
    void unsetdbInstanceId();
    void setDbInstanceId(const std::string& value);

    /// <summary>
    /// 云类型： - AWSCloud：亚马逊云。 - TencentCloud：腾讯云。 - AliCloud：阿里云。
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 其他云AK信息。
    /// </summary>

    std::string getAk() const;
    bool akIsSet() const;
    void unsetak();
    void setAk(const std::string& value);

    /// <summary>
    /// 其他云SK信息。
    /// </summary>

    std::string getSk() const;
    bool skIsSet() const;
    void unsetsk();
    void setSk(const std::string& value);

    /// <summary>
    /// 源数据库来源。取值： - aws_aurora_mysql：Amazon Aurora MySQL。 - tencent_tdsql_c：腾讯云TDSQL-C MySQL。 - ali_rds_mysql：阿里云RDS MySQL。
    /// </summary>

    std::string getDbSource() const;
    bool dbSourceIsSet() const;
    void unsetdbSource();
    void setDbSource(const std::string& value);

    /// <summary>
    /// 其他云Region名称。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 流量文件来源。 - sdk：通过三方云API接口方式下载审计日志。
    /// </summary>

    std::string getTrafficSource() const;
    bool trafficSourceIsSet() const;
    void unsettrafficSource();
    void setTrafficSource(const std::string& value);


protected:
    std::string dbInstanceId_;
    bool dbInstanceIdIsSet_;
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string ak_;
    bool akIsSet_;
    std::string sk_;
    bool skIsSet_;
    std::string dbSource_;
    bool dbSourceIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string trafficSource_;
    bool trafficSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayConfigInfo_H_
