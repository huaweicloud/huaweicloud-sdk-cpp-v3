
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListBriefRecordResponseBody_result.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListBriefRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBriefRecordResponse();
    virtual ~ListBriefRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBriefRecordResponse members

    /// <summary>
    /// 结果列表
    /// </summary>

    std::vector<ListBriefRecordResponseBody_result>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ListBriefRecordResponseBody_result>& value);

    /// <summary>
    /// 错误
    /// </summary>

    Object getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Object& value);

    /// <summary>
    /// 状态信息
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::vector<ListBriefRecordResponseBody_result> result_;
    bool resultIsSet_;
    Object error_;
    bool errorIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordResponse_H_
