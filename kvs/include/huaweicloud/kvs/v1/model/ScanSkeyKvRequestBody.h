
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ConditionExpression.h>
#include <huaweicloud/kvs/v1/model/ReturnPartialBlob.h>
#include <string>
#include <huaweicloud/core/bson/Bson.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  ScanSkeyKvRequestBody
    : public ModelBase
{
public:
    ScanSkeyKvRequestBody();
    virtual ~ScanSkeyKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanSkeyKvRequestBody members

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

    bool isStrongConsistent() const;
    bool strongConsistentIsSet() const;
    void unsetstrongConsistent();
    void setStrongConsistent(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getHintIndex() const;
    bool hintIndexIsSet() const;
    void unsethintIndex();
    void setHintIndex(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimitNum() const;
    bool limitNumIsSet() const;
    void unsetlimitNum();
    void setLimitNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Document getShardKey() const;
    bool shardKeyIsSet() const;
    void unsetshardKey();
    void setShardKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Document getStartSortKey() const;
    bool startSortKeyIsSet() const;
    void unsetstartSortKey();
    void setStartSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Document getEndSortKey() const;
    bool endSortKeyIsSet() const;
    void unsetendSortKey();
    void setEndSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    ConditionExpression getFilterExpression() const;
    bool filterExpressionIsSet() const;
    void unsetfilterExpression();
    void setFilterExpression(const ConditionExpression& value);

    /// <summary>
    /// 
    /// </summary>

    Document getFilterVarDefine() const;
    bool filterVarDefineIsSet() const;
    void unsetfilterVarDefine();
    void setFilterVarDefine(const Document& value);

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
    bool strongConsistent_;
    bool strongConsistentIsSet_;
    std::string hintIndex_;
    bool hintIndexIsSet_;
    int32_t limitNum_;
    bool limitNumIsSet_;
    Document shardKey_;
    bool shardKeyIsSet_;
    Document startSortKey_;
    bool startSortKeyIsSet_;
    Document endSortKey_;
    bool endSortKeyIsSet_;
    ConditionExpression filterExpression_;
    bool filterExpressionIsSet_;
    Document filterVarDefine_;
    bool filterVarDefineIsSet_;
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

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequestBody_H_
