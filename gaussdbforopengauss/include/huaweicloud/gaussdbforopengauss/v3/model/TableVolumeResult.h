
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TableVolumeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TableVolumeResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  TableVolumeResult
    : public ModelBase
{
public:
    TableVolumeResult();
    virtual ~TableVolumeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableVolumeResult members

    /// <summary>
    /// **参数解释**: 表的大小。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTableSize() const;
    bool tableSizeIsSet() const;
    void unsettableSize();
    void setTableSize(const std::string& value);

    /// <summary>
    /// **参数解释**: 表ID。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 表名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**: 表所属用户名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTableOwner() const;
    bool tableOwnerIsSet() const;
    void unsettableOwner();
    void setTableOwner(const std::string& value);

    /// <summary>
    /// **参数解释**: schema名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**: 表或者索引是否具有分区表的性质。 **取值范围**: 不涉及。 
    /// </summary>

    bool isIsPartType() const;
    bool isPartTypeIsSet() const;
    void unsetisPartType();
    void setIsPartType(bool value);

    /// <summary>
    /// **参数解释**: 是否包含hash分区列信息。 **取值范围**: 不涉及。 
    /// </summary>

    bool isIsHashClusterKey() const;
    bool isHashClusterKeyIsSet() const;
    void unsetisHashClusterKey();
    void setIsHashClusterKey(bool value);

    /// <summary>
    /// **参数解释**: 表中行的数目。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTuples() const;
    bool tuplesIsSet() const;
    void unsettuples();
    void setTuples(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改时间。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 表大小平均值(totalsize/DN个数，该值为平均分布的理想情况下，表在各DN占用空间大小)。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getAverageSize() const;
    bool averageSizeIsSet() const;
    void unsetaverageSize();
    void setAverageSize(const std::string& value);

    /// <summary>
    /// **参数解释**: 单DN表大小最大值占比（表在各DN占用空间的最大值/totalsize）。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getMaxRatio() const;
    bool maxRatioIsSet() const;
    void unsetmaxRatio();
    void setMaxRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: 单DN表大小最小值占比（表在各DN占用空间的最小值/totalsize）。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getMinRatio() const;
    bool minRatioIsSet() const;
    void unsetminRatio();
    void setMinRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: 表分布倾斜值（单DN表大小最大值 - 单DN表大小最小值）。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSkewSize() const;
    bool skewSizeIsSet() const;
    void unsetskewSize();
    void setSkewSize(const std::string& value);

    /// <summary>
    /// **参数解释**: 表分布倾斜率（skewsize/totalsize）。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSkewRatio() const;
    bool skewRatioIsSet() const;
    void unsetskewRatio();
    void setSkewRatio(const std::string& value);

    /// <summary>
    /// **参数解释**: 表分布标准方差（在表大小一定的情况下，该值越大表明表的整体分布情况越倾斜）。。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSkewStddev() const;
    bool skewStddevIsSet() const;
    void unsetskewStddev();
    void setSkewStddev(const std::string& value);


protected:
    std::string tableSize_;
    bool tableSizeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string tableOwner_;
    bool tableOwnerIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    bool isPartType_;
    bool isPartTypeIsSet_;
    bool isHashClusterKey_;
    bool isHashClusterKeyIsSet_;
    std::string tuples_;
    bool tuplesIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string averageSize_;
    bool averageSizeIsSet_;
    std::string maxRatio_;
    bool maxRatioIsSet_;
    std::string minRatio_;
    bool minRatioIsSet_;
    std::string skewSize_;
    bool skewSizeIsSet_;
    std::string skewRatio_;
    bool skewRatioIsSet_;
    std::string skewStddev_;
    bool skewStddevIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_TableVolumeResult_H_
