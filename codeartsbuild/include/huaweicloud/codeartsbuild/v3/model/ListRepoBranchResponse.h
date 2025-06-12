
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRepoBranchResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRepoBranchResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRepoBranchResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRepoBranchResponse();
    virtual ~ListRepoBranchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepoBranchResponse members

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 结果
    /// </summary>

    std::vector<std::string>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<std::string>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRepoBranchResponse_H_
