
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/bson/Bson.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  GetKvRequestBody
    : public ModelBase
{
public:
    GetKvRequestBody();
    virtual ~GetKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// GetKvRequestBody members

    /// <summary>
    /// 表名，仓内唯一。 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 用户自定义的主键名及值。
    /// </summary>

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Document primaryKey_;
    bool primaryKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvRequestBody_H_
