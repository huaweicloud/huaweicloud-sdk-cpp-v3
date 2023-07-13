
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_MetaData_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_MetaData_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标识为扩展字段，包括count（当前响应中事件记录的个数）和marker（本次查询返回事件列表最后一个事件ID）。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  MetaData
    : public ModelBase
{
public:
    MetaData();
    virtual ~MetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MetaData members

    /// <summary>
    /// 标识本次查询事件列表返回的事件记录的总条数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 标识本次查询事件列表返回的最后一个事件ID。可以使用这个参数返回值作为分页请求参数next的值，如果marker返回为null，则表示当前请求条件下查询事件列表已经全部返回没有下一页。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::string marker_;
    bool markerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_MetaData_H_
