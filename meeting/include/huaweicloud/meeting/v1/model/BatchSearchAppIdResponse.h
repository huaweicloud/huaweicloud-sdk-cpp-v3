
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchSearchAppIdResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchSearchAppIdResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/Pages.h>
#include <huaweicloud/meeting/v1/model/AppIdInfoDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  BatchSearchAppIdResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchSearchAppIdResponse();
    virtual ~BatchSearchAppIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSearchAppIdResponse members

    /// <summary>
    /// 页面起始页，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。 默认值：10。 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 总数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 企业应用信息
    /// </summary>

    std::vector<AppIdInfoDTO>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<AppIdInfoDTO>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<AppIdInfoDTO> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchSearchAppIdResponse_H_
