
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavor_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavor_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询数据库可变更规格接口，响应体中的计算规格详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ComputeFlavor
    : public ModelBase
{
public:
    ComputeFlavor();
    virtual ~ComputeFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ComputeFlavor members

    /// <summary>
    /// 规格ID，该字段唯一。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源规格编码。例如：rds.pg.m1.xlarge.rr。  更多规格说明请参考数据库实例规格。  “rds”代表RDS产品。 “pg”代表数据库引擎。 “m1.xlarge”代表性能规格，为高内存类型。 “rr”表示只读实例（“.ha”表示主备实例）。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// CPU大小。例如：1表示1U。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 内存大小，单位为GB。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// 规格所在az的状态，包含以下状态：  normal：在售。 unsupported：暂不支持该规格。 sellout：售罄。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ComputeFlavor_H_
