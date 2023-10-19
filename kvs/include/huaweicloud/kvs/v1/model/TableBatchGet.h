
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatchGet_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatchGet_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ReturnPartialBlob.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  TableBatchGet
    : public ModelBase
{
public:
    TableBatchGet();
    virtual ~TableBatchGet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// TableBatchGet members

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

    bool isConsistency() const;
    bool consistencyIsSet() const;
    void unsetconsistency();
    void setConsistency(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<OperItem>& getKvOpers();
    bool kvOpersIsSet() const;
    void unsetkvOpers();
    void setKvOpers(const std::vector<OperItem>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getProjectionFields();
    bool projectionFieldsIsSet() const;
    void unsetprojectionFields();
    void setProjectionFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ReturnPartialBlob getReturnPartialBlob() const;
    bool returnPartialBlobIsSet() const;
    void unsetreturnPartialBlob();
    void setReturnPartialBlob(const ReturnPartialBlob& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    bool consistency_;
    bool consistencyIsSet_;
    std::vector<OperItem> kvOpers_;
    bool kvOpersIsSet_;
    std::vector<std::string> projectionFields_;
    bool projectionFieldsIsSet_;
    ReturnPartialBlob returnPartialBlob_;
    bool returnPartialBlobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_TableBatchGet_H_
