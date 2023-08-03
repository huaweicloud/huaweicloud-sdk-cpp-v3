
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Storage_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Storage_H_

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
/// 实例磁盘类型信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Storage
    : public ModelBase
{
public:
    Storage();
    virtual ~Storage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Storage members

    /// <summary>
    /// 磁盘类型名称，可能取值如下： - ULTRAHIGH：表示SSD。 - LOCALSSD：表示本地SSD。 - CLOUDSSD：表示SSD云盘，仅支持通用型和独享型规格实例。 - ESSD：表示极速型SSD，仅支持独享型规格实例。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 其中key是可用区编号，value是规格所在az的状态，包含以下状态： - normal，在售。 - unsupported，暂不支持该规格。 - sellout，售罄。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 性能规格，包含以下状态： - normal：通用增强型。 - normal2：通用增强Ⅱ型。 - armFlavors：鲲鹏通用增强型。 - dedicicatenormal ：x86独享型。 - armlocalssd：鲲鹏通用型。 - normallocalssd：x86通用型。 - general：通用型。 - dedicated：独享型，仅云盘SSD支持。 - rapid：独享型，仅极速型SSD支持。 - bigmen：超大内存型。
    /// </summary>

    std::vector<std::string>& getSupportComputeGroupType();
    bool supportComputeGroupTypeIsSet() const;
    void unsetsupportComputeGroupType();
    void setSupportComputeGroupType(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;
    std::vector<std::string> supportComputeGroupType_;
    bool supportComputeGroupTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Storage_H_
