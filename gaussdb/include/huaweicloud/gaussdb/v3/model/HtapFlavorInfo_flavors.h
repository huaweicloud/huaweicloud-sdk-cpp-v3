
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapFlavorInfo_flavors_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapFlavorInfo_flavors_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapFlavorInfo_flavors
    : public ModelBase
{
public:
    HtapFlavorInfo_flavors();
    virtual ~HtapFlavorInfo_flavors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapFlavorInfo_flavors members

    /// <summary>
    /// 规格类型，取值为arm、x86和generalX86。  arm：独享型arm规格。  x86：独享型x86规格。  generalX86：通用型X86规格。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

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
    /// 规格ID，该字段唯一。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源规格编码，.同创建指定的flavor_ref。例如：gaussdb.sr-be.xlarge.x86.4。  “gaussdb.sr”代表产品。  “xlarge” 代表计算规格为4U。  “x86” 代表CPU架构为x86。  “4” 表示vCPU和内存为1:4。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 数据库版本号。
    /// </summary>

    std::string getVersionName() const;
    bool versionNameIsSet() const;
    void unsetversionName();
    void setVersionName(const std::string& value);

    /// <summary>
    /// 实例类型。目前仅支持Cluster、Single。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 规格所在AZ的状态，包含以下状态：  normal：在售。  unsupported：暂不支持该规格。  sellout：售罄。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string versionName_;
    bool versionNameIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapFlavorInfo_flavors_H_
