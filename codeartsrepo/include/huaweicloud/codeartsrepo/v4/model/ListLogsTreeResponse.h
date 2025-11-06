
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLogsTreeResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLogsTreeResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/LogTreeDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListLogsTreeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogsTreeResponse();
    virtual ~ListLogsTreeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogsTreeResponse members

    /// <summary>
    /// 文件树列表
    /// </summary>

    std::vector<LogTreeDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<LogTreeDto>& value);


protected:
    std::vector<LogTreeDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListLogsTreeResponse_H_
