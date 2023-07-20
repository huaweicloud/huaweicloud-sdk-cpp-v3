
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabaseRolesResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabaseRolesResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ListDatabaseRolesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseRolesResponse();
    virtual ~ListDatabaseRolesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDatabaseRolesResponse members

    /// <summary>
    /// 数据库角色信息。
    /// </summary>

    std::string getRoles() const;
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::string& value);

    /// <summary>
    /// 数据库角色总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::string roles_;
    bool rolesIsSet_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatabaseRolesResponse_H_
