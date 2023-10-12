
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_Storage_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_Storage_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例磁盘类型信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  Storage
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
    /// 磁盘类型名称，可能取值如下： - ULTRAHIGH，表示SSD。
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


protected:
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_Storage_H_
