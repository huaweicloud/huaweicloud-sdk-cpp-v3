
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseCommentRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseCommentRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/UpdateDatabaseComment.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库备注请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateDatabaseCommentRequest
    : public ModelBase
{
public:
    UpdateDatabaseCommentRequest();
    virtual ~UpdateDatabaseCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDatabaseCommentRequest members

    /// <summary>
    /// 准备修改备注的数据库列表，列表最大长度为50。
    /// </summary>

    std::vector<UpdateDatabaseComment>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<UpdateDatabaseComment>& value);


protected:
    std::vector<UpdateDatabaseComment> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateDatabaseCommentRequest_H_
