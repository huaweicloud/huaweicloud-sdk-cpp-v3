
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AddRdsNoAgentDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    AddRdsNoAgentDatabaseResponse();
    virtual ~AddRdsNoAgentDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRdsNoAgentDatabaseResponse members

    /// <summary>
    /// 添加失败的数据库实例id
    /// </summary>

    std::vector<std::string>& getIllegalDbId();
    bool illegalDbIdIsSet() const;
    void unsetillegalDbId();
    void setIllegalDbId(const std::vector<std::string>& value);

    /// <summary>
    /// 添加成功的数据库实例id
    /// </summary>

    std::vector<std::string>& getLegalDbId();
    bool legalDbIdIsSet() const;
    void unsetlegalDbId();
    void setLegalDbId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> illegalDbId_;
    bool illegalDbIdIsSet_;
    std::vector<std::string> legalDbId_;
    bool legalDbIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseResponse_H_
