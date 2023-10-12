
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_PrimaryKeySchema_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_PrimaryKeySchema_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Field.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  PrimaryKeySchema
    : public ModelBase
{
public:
    PrimaryKeySchema();
    virtual ~PrimaryKeySchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// PrimaryKeySchema members

    /// <summary>
    /// 
    /// </summary>

    std::vector<Field>& getShardKeyFields();
    bool shardKeyFieldsIsSet() const;
    void unsetshardKeyFields();
    void setShardKeyFields(const std::vector<Field>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getShardMode() const;
    bool shardModeIsSet() const;
    void unsetshardMode();
    void setShardMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Field>& getSortKeyFields();
    bool sortKeyFieldsIsSet() const;
    void unsetsortKeyFields();
    void setSortKeyFields(const std::vector<Field>& value);


protected:
    std::vector<Field> shardKeyFields_;
    bool shardKeyFieldsIsSet_;
    std::string shardMode_;
    bool shardModeIsSet_;
    std::vector<Field> sortKeyFields_;
    bool sortKeyFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_PrimaryKeySchema_H_
