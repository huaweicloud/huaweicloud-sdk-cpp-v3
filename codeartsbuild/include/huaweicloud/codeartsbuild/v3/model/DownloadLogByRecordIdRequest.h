
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadLogByRecordIdRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadLogByRecordIdRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadLogByRecordIdRequest
    : public ModelBase
{
public:
    DownloadLogByRecordIdRequest();
    virtual ~DownloadLogByRecordIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadLogByRecordIdRequest members

    /// <summary>
    /// 记录ID,36位数字、小写字母、&#39;-&#39;组组合。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);


protected:
    std::string recordId_;
    bool recordIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadLogByRecordIdRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadLogByRecordIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadLogByRecordIdRequest_H_
