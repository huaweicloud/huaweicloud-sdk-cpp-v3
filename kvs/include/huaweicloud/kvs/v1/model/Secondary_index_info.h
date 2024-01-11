
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Secondary_index_info_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Secondary_index_info_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Secondary_index_info
    : public ModelBase
{
public:
    Secondary_index_info();
    virtual ~Secondary_index_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Secondary_index_info members

    /// <summary>
    /// 索引状态。 - 长度：[1, 255] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getIndexName() const;
    bool indexNameIsSet() const;
    void unsetindexName();
    void setIndexName(const std::string& value);

    /// <summary>
    /// 索引状态。 - \&quot;creating\&quot; - \&quot;active\&quot; - \&quot;deleting\&quot;
    /// </summary>

    std::string getIndexStatus() const;
    bool indexStatusIsSet() const;
    void unsetindexStatus();
    void setIndexStatus(const std::string& value);


protected:
    std::string indexName_;
    bool indexNameIsSet_;
    std::string indexStatus_;
    bool indexStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Secondary_index_info_H_
