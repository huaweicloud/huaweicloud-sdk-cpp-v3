
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Datastore_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Datastore_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建集群数据库参数。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  Datastore
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
    /// controller版本号，默认1.0.6
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 集群数据库类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Datastore_H_
