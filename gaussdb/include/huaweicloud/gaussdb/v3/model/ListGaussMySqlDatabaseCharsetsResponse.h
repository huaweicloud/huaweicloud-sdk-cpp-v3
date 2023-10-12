
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseCharsetsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseCharsetsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlDatabaseCharsetsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGaussMySqlDatabaseCharsetsResponse();
    virtual ~ListGaussMySqlDatabaseCharsetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGaussMySqlDatabaseCharsetsResponse members

    /// <summary>
    /// 数据库字符集列表
    /// </summary>

    std::vector<std::string>& getCharsets();
    bool charsetsIsSet() const;
    void unsetcharsets();
    void setCharsets(const std::vector<std::string>& value);


protected:
    std::vector<std::string> charsets_;
    bool charsetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseCharsetsResponse_H_
