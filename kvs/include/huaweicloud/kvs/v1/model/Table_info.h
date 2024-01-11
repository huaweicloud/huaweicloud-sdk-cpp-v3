
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_info_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_info_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  Table_info
    : public ModelBase
{
public:
    Table_info();
    virtual ~Table_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Table_info members

    /// <summary>
    /// 表状态。 - \&quot;creating\&quot; - \&quot;active\&quot; - \&quot;deleting\&quot;
    /// </summary>

    std::string getTableStatus() const;
    bool tableStatusIsSet() const;
    void unsettableStatus();
    void setTableStatus(const std::string& value);


protected:
    std::string tableStatus_;
    bool tableStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Table_info_H_
