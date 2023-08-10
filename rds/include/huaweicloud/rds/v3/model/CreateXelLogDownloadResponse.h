
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/CreateXelLogDownloadResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateXelLogDownloadResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateXelLogDownloadResponse();
    virtual ~CreateXelLogDownloadResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateXelLogDownloadResponse members

    /// <summary>
    /// 扩展日志文件返回实体
    /// </summary>

    std::vector<CreateXelLogDownloadResult>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<CreateXelLogDownloadResult>& value);

    /// <summary>
    /// 扩展日志文件信息数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<CreateXelLogDownloadResult> list_;
    bool listIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResponse_H_
