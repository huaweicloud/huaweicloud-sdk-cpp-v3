
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_VolumeFlavor_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_VolumeFlavor_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 磁盘规格信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  VolumeFlavor
    : public ModelBase
{
public:
    VolumeFlavor();
    virtual ~VolumeFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeFlavor members

    /// <summary>
    /// 引擎版本
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 磁盘规格码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 磁盘类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 磁盘大小
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 订购周期
    /// </summary>

    std::vector<std::string>& getPeriod();
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::vector<std::string>& value);


protected:
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::vector<std::string> period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_VolumeFlavor_H_
