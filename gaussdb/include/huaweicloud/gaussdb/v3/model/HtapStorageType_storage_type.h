
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapStorageType_storage_type_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapStorageType_storage_type_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapStorageType_storage_type
    : public ModelBase
{
public:
    HtapStorageType_storage_type();
    virtual ~HtapStorageType_storage_type();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapStorageType_storage_type members

    /// <summary>
    /// 存储介质名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可支持可用区信息。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 最小可提供磁盘大小。
    /// </summary>

    int32_t getMinVolumeSize() const;
    bool minVolumeSizeIsSet() const;
    void unsetminVolumeSize();
    void setMinVolumeSize(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;
    int32_t minVolumeSize_;
    bool minVolumeSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapStorageType_storage_type_H_
