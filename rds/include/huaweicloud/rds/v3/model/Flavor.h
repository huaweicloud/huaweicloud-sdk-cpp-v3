
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Flavor_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Flavor_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 规格信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Flavor
    : public ModelBase
{
public:
    Flavor();
    virtual ~Flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Flavor members

    /// <summary>
    /// 规格id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// CPU个数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 内存大小，单位为GB。
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 资源规格编码。例如：rds.mysql.m1.xlarge.rr。  其中形如“xxx.xxx.mcs.i3.xxx.xxx.xxx”是超高性能型（尊享版），需要申请一定权限才可使用，更多规格说明请参考数据库实例规格。 - “rds”代表RDS产品。 - “mysql”代表数据库引擎。 - “m1.xlarge”代表性能规格，为高内存类型。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 实例模型，包括如下类型： - ha，主备实例。 - replica，只读实例。 - single，单实例。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 其中key是可用区编号，value是规格所在az的状态，包含以下状态： - normal，在售。 - unsupported，暂不支持该规格。 - sellout，售罄。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 规格所在az的描述。
    /// </summary>

    std::map<std::string, std::string>& getAzDesc();
    bool azDescIsSet() const;
    void unsetazDesc();
    void setAzDesc(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 数组形式版本号
    /// </summary>

    std::vector<std::string>& getVersionName();
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::vector<std::string>& value);

    /// <summary>
    /// 性能规格，包含以下状态： - normal：通用增强型。 - normal2：通用增强Ⅱ型。 - armFlavors：鲲鹏通用增强型。 - dedicicatenormal ：x86独享型。 - armlocalssd：鲲鹏通用型。 - normallocalssd：x86通用型。 - general：通用型。 - dedicated：独享型，仅云盘SSD支持。 - rapid：独享型，仅极速型SSD支持。 - bigmen：超大内存型。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;
    std::map<std::string, std::string> azDesc_;
    bool azDescIsSet_;
    std::vector<std::string> versionName_;
    bool versionNameIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Flavor_H_
