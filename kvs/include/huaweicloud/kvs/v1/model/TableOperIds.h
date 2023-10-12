
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TableOperIds_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TableOperIds_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/KvOperIds.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  TableOperIds
    : public ModelBase
{
public:
    TableOperIds();
    virtual ~TableOperIds();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TableOperIds members

    /// <summary>
    /// 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    KvOperIds getKvOperIds() const;
    bool kvOperIdsIsSet() const;
    void unsetkvOperIds();
    void setKvOperIds(const KvOperIds& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    KvOperIds kvOperIds_;
    bool kvOperIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TableOperIds_H_
