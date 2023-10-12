
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/KvOptions.h>
#include <huaweicloud/kvs/v1/model/ReturnBlobAttr.h>
#include <string>
#include <huaweicloud/core/bson/Bson.h>
#include <huaweicloud/kvs/v1/model/UpdateBlobAttr.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  RenameKvRequestBody
    : public ModelBase
{
public:
    RenameKvRequestBody();
    virtual ~RenameKvRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// RenameKvRequestBody members

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

    Document getPrimaryKey() const;
    bool primaryKeyIsSet() const;
    void unsetprimaryKey();
    void setPrimaryKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Document getNewSortKey() const;
    bool newSortKeyIsSet() const;
    void unsetnewSortKey();
    void setNewSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    KvOptions getKvOptions() const;
    bool kvOptionsIsSet() const;
    void unsetkvOptions();
    void setKvOptions(const KvOptions& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateBlobAttr getUpdateBlobAttr() const;
    bool updateBlobAttrIsSet() const;
    void unsetupdateBlobAttr();
    void setUpdateBlobAttr(const UpdateBlobAttr& value);

    /// <summary>
    /// 
    /// </summary>

    ReturnBlobAttr getReturnBlobAttr() const;
    bool returnBlobAttrIsSet() const;
    void unsetreturnBlobAttr();
    void setReturnBlobAttr(const ReturnBlobAttr& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    Document primaryKey_;
    bool primaryKeyIsSet_;
    Document newSortKey_;
    bool newSortKeyIsSet_;
    KvOptions kvOptions_;
    bool kvOptionsIsSet_;
    UpdateBlobAttr updateBlobAttr_;
    bool updateBlobAttrIsSet_;
    ReturnBlobAttr returnBlobAttr_;
    bool returnBlobAttrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_RenameKvRequestBody_H_
