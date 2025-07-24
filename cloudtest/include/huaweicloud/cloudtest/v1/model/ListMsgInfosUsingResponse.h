
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListMsgInfosUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListMsgInfosUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/MsgInfoVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListMsgInfosUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMsgInfosUsingResponse();
    virtual ~ListMsgInfosUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMsgInfosUsingResponse members

    /// <summary>
    /// 返回结果
    /// </summary>

    std::vector<MsgInfoVo>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<MsgInfoVo>& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 分页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 总页数
    /// </summary>

    int32_t getTotalPage() const;
    bool totalPageIsSet() const;
    void unsettotalPage();
    void setTotalPage(int32_t value);

    /// <summary>
    /// 总条数
    /// </summary>

    int64_t getTotalSize() const;
    bool totalSizeIsSet() const;
    void unsettotalSize();
    void setTotalSize(int64_t value);


protected:
    std::vector<MsgInfoVo> list_;
    bool listIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t totalPage_;
    bool totalPageIsSet_;
    int64_t totalSize_;
    bool totalSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListMsgInfosUsingResponse_H_
