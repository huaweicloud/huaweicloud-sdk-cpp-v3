
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DatastoreResult_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DatastoreResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DatastoreResult
    : public ModelBase
{
public:
    DatastoreResult();
    virtual ~DatastoreResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatastoreResult members

    /// <summary>
    /// node_type参数模板节点类型。取值范围： - mongos，表示集群mongos节点类型。 - shard，表示集群shard节点类型。 - config，表示集群config节点类型。 - replica，表示副本集类型。 - single，表示单节点类型。 - readonly，表示副本集只读节点类型。 - shard_readonly，表示集群只读节点类型。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// version数据库版本。DDS引擎取值为“5.0”、“4.4”、“4.2”、“4.0”、“3.4”。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DatastoreResult_H_
