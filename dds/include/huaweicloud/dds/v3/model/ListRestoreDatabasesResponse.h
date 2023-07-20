
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreDatabasesResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreDatabasesResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ListRestoreDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRestoreDatabasesResponse();
    virtual ~ListRestoreDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRestoreDatabasesResponse members

    /// <summary>
    /// 数据库总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 数据库列表，列表中每个元素表示一个数据库。
    /// </summary>

    std::vector<std::string>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<std::string>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<std::string> databases_;
    bool databasesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListRestoreDatabasesResponse_H_
