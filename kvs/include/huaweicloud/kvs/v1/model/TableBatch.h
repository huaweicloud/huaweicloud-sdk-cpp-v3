
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatch_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatch_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/OperItem.h>
#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  TableBatch
    : public ModelBase
{
public:
    TableBatch();
    virtual ~TableBatch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TableBatch members

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

    std::vector<OperItem>& getKvOpers();
    bool kvOpersIsSet() const;
    void unsetkvOpers();
    void setKvOpers(const std::vector<OperItem>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<OperItem> kvOpers_;
    bool kvOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatch_H_
