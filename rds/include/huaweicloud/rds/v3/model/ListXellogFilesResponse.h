
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXellogFilesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXellogFilesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListXelLogResponseResult.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListXellogFilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListXellogFilesResponse();
    virtual ~ListXellogFilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListXellogFilesResponse members

    /// <summary>
    /// 扩展日志文件返回体
    /// </summary>

    std::vector<ListXelLogResponseResult>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<ListXelLogResponseResult>& value);

    /// <summary>
    /// 扩展日志文件数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ListXelLogResponseResult> list_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListXellogFilesResponse_H_
