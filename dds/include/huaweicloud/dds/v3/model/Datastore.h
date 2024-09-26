
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_Datastore_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_Datastore_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  Datastore
    : public ModelBase
{
public:
    Datastore();
    virtual ~Datastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Datastore members

    /// <summary>
    /// 数据库版本类型。取值“DDS-Community”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。支持3.4及以上版本。取值为“3.4”、“4.0”、“4.2”、“4.4”、“5.0”。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 存储引擎。支持WiredTiger存储引擎。取值为“wiredTiger”。
    /// </summary>

    std::string getStorageEngine() const;
    bool storageEngineIsSet() const;
    void unsetstorageEngine();
    void setStorageEngine(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string storageEngine_;
    bool storageEngineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_Datastore_H_
