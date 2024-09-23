
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabasesResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabasesResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/dds/v3/model/DatabaseInfoItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabasesResponse();
    virtual ~ListDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabasesResponse members

    /// <summary>
    /// 数据库列表信息。
    /// </summary>

    std::vector<DatabaseInfoItem>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabaseInfoItem>& value);

    /// <summary>
    /// 数据库列表总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DatabaseInfoItem> databases_;
    bool databasesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabasesResponse_H_
