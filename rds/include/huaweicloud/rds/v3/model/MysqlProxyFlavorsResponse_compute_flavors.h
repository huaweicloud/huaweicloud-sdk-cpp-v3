
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavors_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavors_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlProxyFlavorsResponse_compute_flavors
    : public ModelBase
{
public:
    MysqlProxyFlavorsResponse_compute_flavors();
    virtual ~MysqlProxyFlavorsResponse_compute_flavors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlProxyFlavorsResponse_compute_flavors members

    /// <summary>
    /// 数据库代理规格ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库代理规格码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// CPU大小。例如：1表示1U。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 内存大小，单位为GB。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 数据库类型。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 可用区信息，其中key是该规格绑定的可用区，value是该规格在对应可用区中的状态。 取值范围：     normal：正常     abandon：禁用      - 仅展示数据库主实例所在可用区规格状态。
    /// </summary>

    Object getAzStatus() const;
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const Object& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    Object azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavors_H_
