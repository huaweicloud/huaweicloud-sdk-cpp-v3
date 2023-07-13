
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ResultsTopnBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ResultsTopnBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ResultsTopnBody
    : public ModelBase
{
public:
    ResultsTopnBody();
    virtual ~ResultsTopnBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResultsTopnBody members

    /// <summary>
    /// 索引流量，byte, 查询数据类型中包含index时返回
    /// </summary>

    double getIndexTraffic() const;
    bool indexTrafficIsSet() const;
    void unsetindexTraffic();
    void setIndexTraffic(double value);

    /// <summary>
    /// 存储量，byte, 查询数据类型中包含storage时返回
    /// </summary>

    double getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(double value);

    /// <summary>
    /// 写入流量，byte, 查询数据类型中包含write时返回
    /// </summary>

    double getWriteTraffic() const;
    bool writeTrafficIsSet() const;
    void unsetwriteTraffic();
    void setWriteTraffic(double value);

    /// <summary>
    /// 日志组id，资源类型为日志组时返回
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称，资源类型为日志组时返回
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流id，资源类型为日志流时返回
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称，资源类型为日志流时返回
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    double indexTraffic_;
    bool indexTrafficIsSet_;
    double storage_;
    bool storageIsSet_;
    double writeTraffic_;
    bool writeTrafficIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ResultsTopnBody_H_
