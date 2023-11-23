
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_datastore_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_datastore_H_


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
/// 实例的数据库引擎和版本。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsLogPolicyRespondBody_instance_datastore
    : public ModelBase
{
public:
    ListLtsLogPolicyRespondBody_instance_datastore();
    virtual ~ListLtsLogPolicyRespondBody_instance_datastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsLogPolicyRespondBody_instance_datastore members

    /// <summary>
    /// 数据库引擎，值为mongodb。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库大版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_datastore_H_
